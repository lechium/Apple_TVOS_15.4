//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SACalendar;

@interface SAMPPlaybackInfo <SAAceSerializable>
{
}

+ (id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e271
+ (id)playbackInfo;	// IMP=0x000000000003e25f
@property(nonatomic) _Bool rememberPlaybackPosition;
@property(nonatomic) long long plays;
@property(nonatomic) long long playbackPositionMillis;
@property(retain, nonatomic) SACalendar *lastPlayedDate;
@property(nonatomic) long long durationMillis;
- (id)encodedClassName;	// IMP=0x000000000003e252
- (id)groupIdentifier;	// IMP=0x000000000003e23e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

