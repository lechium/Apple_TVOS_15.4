//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000f9dd6
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f9efe
- (id)buildDictionaryRepresentation;	// IMP=0x00100000000f9e31
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000f9df6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000f9df0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000f9dde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f9dcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f9d9c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000f9d2f
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000000f9cec
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f9f6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

