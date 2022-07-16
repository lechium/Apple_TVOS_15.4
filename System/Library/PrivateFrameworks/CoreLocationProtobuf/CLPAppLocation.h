//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPLocation, NSString;

@interface CLPAppLocation : PBCodable <NSCopying>
{
    double _age;	// 8 = 0x8
    NSString *_appBundleId;	// 16 = 0x10
    int _appState;	// 24 = 0x18
    CLPLocation *_location;	// 32 = 0x20
    int _loiType;	// 40 = 0x28
    int _routineMode;	// 44 = 0x2c
    int _serverHash;	// 48 = 0x30
    struct {
        unsigned int age:1;
        unsigned int loiType:1;
        unsigned int routineMode:1;
        unsigned int serverHash:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000089d6
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000008843
- (unsigned long long)hash;	// IMP=0x000000000000866a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000084d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000083b4
- (void)copyTo:(id)arg1;	// IMP=0x00000000000082ce
- (void)writeTo:(id)arg1;	// IMP=0x00000000000081bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000081ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000007f5f
- (id)description;	// IMP=0x0000000000007eb0
@property(nonatomic) _Bool hasLoiType;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
@property(nonatomic) _Bool hasRoutineMode;
@property(nonatomic) int routineMode; // @synthesize routineMode=_routineMode;
@property(nonatomic) _Bool hasServerHash;
@property(nonatomic) _Bool hasAge;

@end
