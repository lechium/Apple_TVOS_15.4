//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFInfoTuple-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFInfoTuple : NSObject <SFInfoTuple, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int initiallyVisibleValues:1;
    } _has;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSArray *_values;	// 24 = 0x18
    unsigned long long _initiallyVisibleValues;	// 32 = 0x20
    NSString *_showMoreString;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c58ae
- (void).cxx_destruct;	// IMP=0x00000000001c5bcc
@property(copy, nonatomic) NSString *showMoreString; // @synthesize showMoreString=_showMoreString;
@property(nonatomic) unsigned long long initiallyVisibleValues; // @synthesize initiallyVisibleValues=_initiallyVisibleValues;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c5ad0
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c5981
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c58cf
- (_Bool)hasInitiallyVisibleValues;	// IMP=0x00000000001c58c4
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000002ad9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

