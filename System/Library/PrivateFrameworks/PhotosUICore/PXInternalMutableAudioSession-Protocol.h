//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableAudioSession-Protocol.h>

@class NSError, NSNumber;

@protocol PXInternalMutableAudioSession <PXMutableAudioSession>
@property(retain, nonatomic) NSNumber *contentLoudnessInLKFS;
@property(retain, nonatomic) NSNumber *contentPeakDecibels;
@property(nonatomic) _Bool isAtEnd;
@property(nonatomic) _Bool isReadyToPlay;
@property(retain, nonatomic) NSError *error;
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) long long status;
@end

