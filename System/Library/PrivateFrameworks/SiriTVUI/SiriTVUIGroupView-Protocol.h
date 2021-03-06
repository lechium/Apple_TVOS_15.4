//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/NSObject-Protocol.h>

@class NSArray, UIView;

@protocol SiriTVUIGroupView <NSObject>
@property(readonly, nonatomic) NSArray *groupedSubviews;
- (void)removeGroupedSubview:(UIView *)arg1;
- (void)addGroupedSubview:(UIView *)arg1;

@optional
- (void)subviewOffsetsDidChange:(_Bool)arg1;
@end

