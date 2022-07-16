//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFAudioSessionCoordinationDeviceInfo, NSArray, NSDateInterval, NSString;

@interface AFAudioSessionCoordinationSnapshot : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _isAudioSessionActive;	// 8 = 0x8
    NSDateInterval *_currentOrUpNextDateInterval;	// 16 = 0x10
    NSArray *_localActiveAssertionContexts;	// 24 = 0x18
    NSArray *_localPendingAssertionContexts;	// 32 = 0x20
    NSArray *_remoteActiveAssertionContexts;	// 40 = 0x28
    NSArray *_remotePendingAssertionContexts;	// 48 = 0x30
    AFAudioSessionCoordinationDeviceInfo *_localDevice;	// 56 = 0x38
    NSArray *_remoteQualifiedInRangeDevices;	// 64 = 0x40
    NSArray *_remoteQualifiedOutOfRangeDevices;	// 72 = 0x48
    NSArray *_remoteDisqualifiedDevices;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013b696
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000013e208
- (void).cxx_destruct;	// IMP=0x000000000013dc1e
@property(readonly, copy, nonatomic) NSArray *remoteDisqualifiedDevices; // @synthesize remoteDisqualifiedDevices=_remoteDisqualifiedDevices;
@property(readonly, copy, nonatomic) NSArray *remoteQualifiedOutOfRangeDevices; // @synthesize remoteQualifiedOutOfRangeDevices=_remoteQualifiedOutOfRangeDevices;
@property(readonly, copy, nonatomic) NSArray *remoteQualifiedInRangeDevices; // @synthesize remoteQualifiedInRangeDevices=_remoteQualifiedInRangeDevices;
@property(readonly, copy, nonatomic) AFAudioSessionCoordinationDeviceInfo *localDevice; // @synthesize localDevice=_localDevice;
@property(readonly, copy, nonatomic) NSArray *remotePendingAssertionContexts; // @synthesize remotePendingAssertionContexts=_remotePendingAssertionContexts;
@property(readonly, copy, nonatomic) NSArray *remoteActiveAssertionContexts; // @synthesize remoteActiveAssertionContexts=_remoteActiveAssertionContexts;
@property(readonly, copy, nonatomic) NSArray *localPendingAssertionContexts; // @synthesize localPendingAssertionContexts=_localPendingAssertionContexts;
@property(readonly, copy, nonatomic) NSArray *localActiveAssertionContexts; // @synthesize localActiveAssertionContexts=_localActiveAssertionContexts;
@property(readonly, nonatomic) _Bool isAudioSessionActive; // @synthesize isAudioSessionActive=_isAudioSessionActive;
@property(readonly, copy, nonatomic) NSDateInterval *currentOrUpNextDateInterval; // @synthesize currentOrUpNextDateInterval=_currentOrUpNextDateInterval;
- (id)buildDictionaryRepresentation;	// IMP=0x000000000013ce41
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000013bc61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013bb28
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013b69e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b68b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013b31c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000013ad43
@property(readonly, copy) NSString *description;
- (id)initWithCurrentOrUpNextDateInterval:(id)arg1 isAudioSessionActive:(_Bool)arg2 localActiveAssertionContexts:(id)arg3 localPendingAssertionContexts:(id)arg4 remoteActiveAssertionContexts:(id)arg5 remotePendingAssertionContexts:(id)arg6 localDevice:(id)arg7 remoteQualifiedInRangeDevices:(id)arg8 remoteQualifiedOutOfRangeDevices:(id)arg9 remoteDisqualifiedDevices:(id)arg10;	// IMP=0x000000000013ab62
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000013e277

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

