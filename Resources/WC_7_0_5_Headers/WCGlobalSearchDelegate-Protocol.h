//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WCGlobalSearchDelegate <NSObject>

@optional
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (void)SearchBarShouldEnd;
- (void)cancelSearch;
- (void)mmSearchBarDidEnd;
- (_Bool)shouldHideTabbarBeforeSearchBarBecomeActive;
- (_Bool)shouldShowTabbarAfterSearchBarBecomeUnActive;
@end
