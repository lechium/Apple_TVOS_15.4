//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPerformContactQueryCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFPerformContactQueryCommand <SFPerformContactQueryCommand, NSSecureCoding, NSCopying>
{
    NSString *_contactIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001be74c
- (void).cxx_destruct;	// IMP=0x00000000001be739
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001be6b2
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001be563
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001be4b1
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000191b81

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

