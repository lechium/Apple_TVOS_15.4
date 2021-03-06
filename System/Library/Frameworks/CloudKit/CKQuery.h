//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_recordType;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000030bae
- (void).cxx_destruct;	// IMP=0x0000000000031023
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (id)description;	// IMP=0x0000000000030ff3
- (id)CKPropertiesDescription;	// IMP=0x0000000000030f60
- (id)debugDescription;	// IMP=0x0000000000030e72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030d80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030bb6
- (void)setPredicate:(id)arg1;	// IMP=0x0000000000030a96
- (void)setRecordType:(id)arg1;	// IMP=0x000000000003075b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030692
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2;	// IMP=0x00000000000304b1
- (id)init;	// IMP=0x0000000000030435

@end

