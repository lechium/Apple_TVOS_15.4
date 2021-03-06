//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class TVOneupView, UIView;

@protocol TVOneupViewDataSource <NSObject>
- (UIView *)oneupView:(TVOneupView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (long long)numberOfItemsInOneupView:(TVOneupView *)arg1;

@optional
- (UIView *)oneupView:(TVOneupView *)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;
- (long long)oneupView:(TVOneupView *)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;
@end

