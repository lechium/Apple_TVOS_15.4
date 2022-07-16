//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface PPQuickTypeItem : NSObject <NSSecureCoding>
{
    unsigned char _source;	// 8 = 0x8
    _Bool _shouldAggregate;	// 9 = 0x9
    unsigned char _flags;	// 10 = 0xa
    unsigned int _fields;	// 12 = 0xc
    double _score;	// 16 = 0x10
    NSString *_sourceIdentifier;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSDate *_date;	// 56 = 0x38
    NSString *_originatingBundleID;	// 64 = 0x40
    NSURL *_originatingWebsiteURL;	// 72 = 0x48
    unsigned long long _predictionAge;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003919a
+ (id)quickTypeItemWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(_Bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;	// IMP=0x0000000000039044
- (void).cxx_destruct;	// IMP=0x0000000000038fe5
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) _Bool shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property(nonatomic) unsigned long long predictionAge; // @synthesize predictionAge=_predictionAge;
@property(copy, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(nonatomic) unsigned int fields; // @synthesize fields=_fields;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) unsigned char source; // @synthesize source=_source;
@property(nonatomic) double score; // @synthesize score=_score;
- (long long)reverseCompare:(id)arg1;	// IMP=0x0000000000038ea7
- (long long)compare:(id)arg1;	// IMP=0x0000000000038cfa
- (_Bool)isEqualToQuickTypeItem:(id)arg1;	// IMP=0x0000000000038a99
- (_Bool)hasScoreSimilarToItem:(id)arg1;	// IMP=0x0000000000038a72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038a0a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000388c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038760
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038420
- (unsigned long long)hash;	// IMP=0x00000000000382d8
- (id)description;	// IMP=0x0000000000038223
- (id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(_Bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;	// IMP=0x00000000000380a3

@end
