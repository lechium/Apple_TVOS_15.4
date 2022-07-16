//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>
#import <PersonalizationPortraitInternals/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _limit;	// 8 = 0x8
    NSDate *_fromDate;	// 16 = 0x10
    NSDate *_toDate;	// 24 = 0x18
    NSSet *_matchingBundleIds;	// 32 = 0x20
    NSSet *_matchingDocumentIds;	// 40 = 0x28
    NSString *_matchingContactHandle;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e813e
- (void).cxx_destruct;	// IMP=0x00000000000e80f5
@property(retain, nonatomic) NSString *matchingContactHandle; // @synthesize matchingContactHandle=_matchingContactHandle;
@property(retain, nonatomic) NSSet *matchingDocumentIds; // @synthesize matchingDocumentIds=_matchingDocumentIds;
@property(retain, nonatomic) NSSet *matchingBundleIds; // @synthesize matchingBundleIds=_matchingBundleIds;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)description;	// IMP=0x00000000000e7ffe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e7f97
- (_Bool)isEqualToSourceQuery:(id)arg1;	// IMP=0x00000000000e7cbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e7c06
- (unsigned long long)hash;	// IMP=0x00000000000e7b66
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e7aa2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e78b5
- (id)init;	// IMP=0x00000000000e7879

@end

