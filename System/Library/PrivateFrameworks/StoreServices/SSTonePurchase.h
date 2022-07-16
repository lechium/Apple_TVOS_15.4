//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase <SSXPCCoding, NSSecureCoding, NSCopying>
{
    NSArray *_allowedToneStyles;	// 248 = 0xf8
    NSNumber *_assigneeIdentifier;	// 256 = 0x100
    NSString *_assigneeContactIdentifier;	// 264 = 0x108
    NSString *_assigneeToneStyle;	// 272 = 0x110
    _Bool _shouldMakeDefaultRingtone;	// 280 = 0x118
    _Bool _shouldMakeDefaultTextTone;	// 281 = 0x119
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040c3a
- (void).cxx_destruct;	// IMP=0x00000000000410a4
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000040f4b
- (id)copyXPCEncoding;	// IMP=0x0000000000040dba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040c42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040a23
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000407cb
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;	// IMP=0x0000000000040514
- (void)_addEntriesToDatabaseEncoding:(id)arg1;	// IMP=0x000000000004036f
@property _Bool shouldMakeDefaultTextTone;
@property _Bool shouldMakeDefaultRingtone;
@property(copy) NSString *assigneeToneStyle;
@property(retain) NSString *assigneeContactIdentifier;
@property(retain) NSNumber *assigneeIdentifier;
@property(copy) NSArray *allowedToneStyles;
- (id)initWithItem:(id)arg1 offer:(id)arg2;	// IMP=0x000000000003f9b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

