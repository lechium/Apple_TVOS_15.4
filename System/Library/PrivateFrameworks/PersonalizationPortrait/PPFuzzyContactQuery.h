//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface PPFuzzyContactQuery : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _onlyAddressBook;	// 8 = 0x8
    NSSet *_sourceBundleIds;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c1c9
- (void).cxx_destruct;	// IMP=0x000000000000c196
@property(nonatomic) _Bool onlyAddressBook; // @synthesize onlyAddressBook=_onlyAddressBook;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSSet *sourceBundleIds; // @synthesize sourceBundleIds=_sourceBundleIds;
- (_Bool)isEqualToFuzzyContactQuery:(id)arg1;	// IMP=0x000000000000c026
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bfbe
- (id)description;	// IMP=0x000000000000bf6f
- (unsigned long long)hash;	// IMP=0x000000000000becc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000be44
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000badf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ba1e

@end

