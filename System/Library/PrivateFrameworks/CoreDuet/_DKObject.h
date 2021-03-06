//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSDate, NSString, NSUUID, _DKSource;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    _DKSource *_source;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    NSDate *_localCreationDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ea0ce
+ (id)fromPBCodable:(id)arg1;	// IMP=0x00000000000b2f38
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;	// IMP=0x000000000010efef
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;	// IMP=0x000000000010ebdd
+ (id)entityName;	// IMP=0x000000000010ebae
- (void).cxx_destruct;	// IMP=0x00000000000ea753
@property(retain) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) _DKSource *source; // @synthesize source=_source;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea4b1
- (id)stringValue;	// IMP=0x00000000000ea41d
- (double)doubleValue;	// IMP=0x00000000000ea414
- (long long)integerValue;	// IMP=0x00000000000ea3fc
- (_Bool)boolValue;	// IMP=0x00000000000ea3e3
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea22b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea0d6
- (id)init;	// IMP=0x00000000000ea09f
- (id)toPBCodable;	// IMP=0x00000000000b2f30
- (_Bool)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;	// IMP=0x000000000010f759
- (_Bool)copyToManagedObject:(id)arg1;	// IMP=0x000000000010f2f9
- (long long)typeCode;	// IMP=0x000000000010ebd5
- (id)entityName;	// IMP=0x000000000010ebbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

