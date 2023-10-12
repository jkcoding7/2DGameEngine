#pragma once

#include "../ECS/ECS.h"
#include "../Components/SpriteComponent.h"
#include "../Components/AnimationComponent.h"


class AnimationSystem : public System {
	public:
		AnimationSystem() {
			RequireComponent<SpriteComponent>();
			RequireComponent<AnimationComponent>();
		}

		void Update() {
			for (auto entity : GetSystemEntities()) {
				auto animation = entity.GetComponent<AnimationComponent>();
				auto sprite = entity.GetComponent<SpriteComponent>();


			}
		}
};