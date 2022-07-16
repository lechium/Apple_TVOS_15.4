//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INNoteContent : NSObject <INCacheableContainer, NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000deca0
- (id)_dictionaryRepresentation;	// IMP=0x00000000000dec93
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000debb7
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000deb9d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000deb72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000deb67
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000deb5f
@property(readonly) unsigned long long hash;
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00000000000d83b4
- (id)_intents_cacheableObjects;	// IMP=0x00000000000d83ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
