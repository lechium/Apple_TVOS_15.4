//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIView, _TVOneupView;

@protocol TVOneupViewDataSource <NSObject>
- (UIView *)oneupView:(_TVOneupView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfItemsInOneupView:(_TVOneupView *)arg1;

@optional
- (UIView *)oneupView:(_TVOneupView *)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;
- (long long)oneupView:(_TVOneupView *)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;
@end

