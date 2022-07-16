//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPlayVideoCommand-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFPlayVideoCommand <SFPlayVideoCommand, NSSecureCoding, NSCopying>
{
    NSURL *_url;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c2003
- (void).cxx_destruct;	// IMP=0x00000000001c1ff0
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c1f69
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c1e1a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c1d68
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001a5207

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
