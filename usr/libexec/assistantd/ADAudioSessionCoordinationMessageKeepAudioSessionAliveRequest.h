//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest : NSObject
{
    double _expirationDuration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000019add8
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000019b1a3
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
- (id)buildDictionaryRepresentation;	// IMP=0x001000000019afd9
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000019af08
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000019ae7c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000019ade0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019adcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019ad4d
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000019ab98
@property(readonly, copy) NSString *description;
- (id)initWithExpirationDuration:(double)arg1;	// IMP=0x001000000019ab41
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000019b212

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
