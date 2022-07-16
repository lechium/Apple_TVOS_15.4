//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;

@protocol PXAudioCueSource <NSObject>
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) _Bool isEmpty;
- (NSString *)diagnosticStringForTimeRange:(CDStruct_e83c9415)arg1 indicatorTime:(CDStruct_1b6d18a9)arg2 rangeIndicatorTimeRange:(CDStruct_e83c9415)arg3 stringLength:(long long)arg4;
- (void)enumerateCuesInRange:(CDStruct_e83c9415)arg1 withBlock:(void (^)(struct, _Bool *))arg2;
- (CDStruct_2a08cb02)bestCueInRange:(CDStruct_e83c9415)arg1 preferredTime:(CDStruct_1b6d18a9)arg2;
@end

