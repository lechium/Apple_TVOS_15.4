//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserReportRequest-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>
{
    NSString *_affordanceText;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_dismissText;	// 24 = 0x18
    NSArray *_userReportOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ae3fd
@property(copy, nonatomic) NSArray *userReportOptions; // @synthesize userReportOptions=_userReportOptions;
@property(copy, nonatomic) NSString *dismissText; // @synthesize dismissText=_dismissText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000adfce
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000adf10
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000adaef
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ad5af
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ad3d2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ad3c5
- (id)userReportOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ad3a8
- (unsigned long long)userReportOptionsCount;	// IMP=0x00000000000ad38b
- (void)addUserReportOptions:(id)arg1;	// IMP=0x00000000000ad311
- (void)clearUserReportOptions;	// IMP=0x00000000000ad2f4
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000006458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

