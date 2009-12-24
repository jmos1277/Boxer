/* 
 Boxer is copyright 2009 Alun Bestor and contributors.
 Boxer is released under the GNU General Public License 2.0. A full copy of this license can be
 found in this XCode project at Resources/English.lproj/GNU General Public License.txt, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */



#import <Cocoa/Cocoa.h>


//BXScroller is a custom scroller used in some of our interfaces: it displayes a simple grey
//scroller knob in a track with no scroll buttons.

@interface BXScroller : NSScroller
- (BOOL) isVertical;	//Returns whether the scroller is horizontal or vertical.

- (NSColor *)slotFill;			//The color with which to fill the scroller track
- (NSShadow *)slotShadow;		//The inner shadow to give the scroller track
- (NSGradient *)knobGradient;	//The gradient with which to fill the scroller knob
@end

//A recoloured variant for use in HUD-style panels.
@interface BXHUDScroller : BXScroller
@end