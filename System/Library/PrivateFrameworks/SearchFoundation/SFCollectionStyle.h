//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCollectionStyle-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFCollectionStyle : NSObject <SFCollectionStyle, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int initiallyVisibleCardSectionCount:1;
    } _has;	// 8 = 0x8
    unsigned long long _initiallyVisibleCardSectionCount;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a9292
@property(nonatomic) unsigned long long initiallyVisibleCardSectionCount; // @synthesize initiallyVisibleCardSectionCount=_initiallyVisibleCardSectionCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a94b4
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a9365
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a92b3
- (_Bool)hasInitiallyVisibleCardSectionCount;	// IMP=0x00000000001a92a8
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000001afa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

