//
//  ITTransitionView.h
//  ITTransitionView-Demo
//
//  Created by Ilija Tovilo on 19/01/14.
//  Copyright (c) 2014 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#import "ITTransition.h"
#import "ITTransformTransition.h"
#import "ITDualTransition.h"

/**
 *  @class ITTransitionView
 *
 *  ITTransitionView is a view that can replace it's content view with customizable transition animations.
 *  Core Animation is used on the fly, but the views don't actually have to be layer-backed.
 */
@interface ITTransitionView : NSView


/**
 *  @property content - The view currently displayed in the transition view.
 *                      To change it, use the `transitionToView:withTransition:` method.
 */
@property (readonly, strong) NSView *contentView;


/**
 *  @property lock - True if the view is currently animating.
 */
@property (readonly) BOOL lock;


/**
 *  Used to replace the content view with another view.
 *
 *  @param view       - The view to replace the current content view with.
 *  @param transition - The Transition used to replace the content view.
 */
- (void)transitionToView:(NSView *)view
          withTransition:(ITTransition *)transition;

@end
