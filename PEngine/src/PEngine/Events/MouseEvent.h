#pragma once

#include "Event.h"

#include <sstream>

namespace PEngine
{
	class PEngine_API MouseMovedEvent : public Event
	{
		public:
			MouseMovedEvent(float x, float y)
				: m_MouseX(x), m_MouseY(y)
			{
			}

			inline float GetX() const { return m_MouseX; }
			inline float GetY() const { return m_MouseY; }

			std::string ToString() const override
			{
				std::stringstream ss;
				ss << "MouseMovedEvent : " << m_MouseX << ", " << m_MouseY;
				return ss.str();
			}

			EVENT_CLASS_TYPE(MouseMoved)
			EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

		private:
			float m_MouseX = 0.f;
			float m_MouseY = 0.f;
	};

	class PEngine_API MouseScrolledEvent : public Event
	{
		public:
			MouseScrolledEvent(float xOffset, float yOffset)
				: m_XOffset(xOffset), m_YOffset(yOffset)
			{
			}

			inline float GetXOffset() const { return m_XOffset; }
			inline float GetYOffset() const { return m_YOffset; }

			std::string ToString() const override
			{
				std::stringstream ss;
				ss << "MouseScrolledEvent : " << GetXOffset() << ", " << GetYOffset();
				return ss.str();
			}

			EVENT_CLASS_TYPE(MouseScrolled)
			EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

			private:
				float m_XOffset = 0.f;
				float m_YOffset = 0.f;
	};

	class PEngine_API MouseButtonEvent: public Event
	{
		public:
			MouseButtonEvent(int button)
				: m_Button(button)
			{
			}

			inline int GetMouseButton() const { return m_Button; }

			EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

		protected:
			int m_Button;
	};

	class PEngine_API MouseButtonPressedEvent : MouseButtonEvent
	{
		public:
			MouseButtonPressedEvent(int button)
				: MouseButtonEvent(button)
			{
			}

			std::string ToString() const override
			{
				std::stringstream ss;
				ss << "MouseButtonPressedEvent : " << m_Button;
				return ss.str();
			}

			EVENT_CLASS_TYPE(MouseButtonPressed)
	};

	class PEngine_API MouseButtonReleasedEvent : MouseButtonEvent
	{
		public:
			MouseButtonReleasedEvent(int button)
				: MouseButtonEvent(button)
			{
			}

			std::string ToString() const override
			{
				std::stringstream ss;
				ss << "MouseButtonReleasedEvent : " << m_Button;
				return ss.str();
			}

			EVENT_CLASS_TYPE(MouseButtonReleased)
	};
}

