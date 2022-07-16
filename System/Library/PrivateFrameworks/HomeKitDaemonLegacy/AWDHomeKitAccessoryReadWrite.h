//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation, NSMutableArray, NSString;

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    int _certified;	// 24 = 0x18
    NSMutableArray *_characteristics;	// 32 = 0x20
    NSString *_clientMetricIdentifier;	// 40 = 0x28
    unsigned int _consecutiveFailureCount;	// 48 = 0x30
    unsigned int _duration;	// 52 = 0x34
    int _errorCode;	// 56 = 0x38
    NSString *_primaryServiceType;	// 64 = 0x40
    int _source;	// 72 = 0x48
    unsigned int _timeElapsedSinceFirstFailure;	// 76 = 0x4c
    NSString *_transaction;	// 80 = 0x50
    NSString *_transportProtocolVersion;	// 88 = 0x58
    int _transportType;	// 96 = 0x60
    unsigned int _underlyingErrorCode;	// 100 = 0x64
    NSString *_underlyingErrorDomain;	// 104 = 0x68
    AWDHomeKitVendorInformation *_vendorDetails;	// 112 = 0x70
    _Bool _isCached;	// 120 = 0x78
    _Bool _isNoeAccessory;	// 121 = 0x79
    _Bool _isRemote;	// 122 = 0x7a
    _Bool _isRemoteAccessAllowed;	// 123 = 0x7b
    _Bool _isRemotelyReachable;	// 124 = 0x7c
    _Bool _isResidentAvailable;	// 125 = 0x7d
    _Bool _isSentOverNoe;	// 126 = 0x7e
    _Bool _isTimedWrite;	// 127 = 0x7f
    _Bool _isWrite;	// 128 = 0x80
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int consecutiveFailureCount:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int source:1;
        unsigned int timeElapsedSinceFirstFailure:1;
        unsigned int transportType:1;
        unsigned int underlyingErrorCode:1;
        unsigned int isCached:1;
        unsigned int isNoeAccessory:1;
        unsigned int isRemote:1;
        unsigned int isRemoteAccessAllowed:1;
        unsigned int isRemotelyReachable:1;
        unsigned int isResidentAvailable:1;
        unsigned int isSentOverNoe:1;
        unsigned int isTimedWrite:1;
        unsigned int isWrite:1;
    } _has;	// 132 = 0x84
}

+ (Class)characteristicsType;	// IMP=0x00000000001ec3ac
- (void).cxx_destruct;	// IMP=0x00000000001eb5fb
@property(retain, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) _Bool isSentOverNoe; // @synthesize isSentOverNoe=_isSentOverNoe;
@property(nonatomic) _Bool isNoeAccessory; // @synthesize isNoeAccessory=_isNoeAccessory;
@property(nonatomic) unsigned int timeElapsedSinceFirstFailure; // @synthesize timeElapsedSinceFirstFailure=_timeElapsedSinceFirstFailure;
@property(nonatomic) unsigned int consecutiveFailureCount; // @synthesize consecutiveFailureCount=_consecutiveFailureCount;
@property(nonatomic) _Bool isRemotelyReachable; // @synthesize isRemotelyReachable=_isRemotelyReachable;
@property(nonatomic) _Bool isRemoteAccessAllowed; // @synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed;
@property(nonatomic) _Bool isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property(retain, nonatomic) NSString *primaryServiceType; // @synthesize primaryServiceType=_primaryServiceType;
@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSString *transportProtocolVersion; // @synthesize transportProtocolVersion=_transportProtocolVersion;
@property(nonatomic) _Bool isTimedWrite; // @synthesize isTimedWrite=_isTimedWrite;
@property(retain, nonatomic) NSString *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(retain, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) _Bool isRemote; // @synthesize isRemote=_isRemote;
@property(nonatomic) _Bool isWrite; // @synthesize isWrite=_isWrite;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001eaef4
- (unsigned long long)hash;	// IMP=0x00000000001eab29
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ea544
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ea016
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e9c6a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e9809
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e97fc
- (id)dictionaryRepresentation;	// IMP=0x00000000001e8cf0
- (id)description;	// IMP=0x00000000001e8c41
@property(readonly, nonatomic) _Bool hasClientMetricIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(nonatomic) _Bool hasIsSentOverNoe;
@property(nonatomic) _Bool hasIsNoeAccessory;
@property(nonatomic) _Bool hasTimeElapsedSinceFirstFailure;
@property(nonatomic) _Bool hasConsecutiveFailureCount;
@property(nonatomic) _Bool hasIsRemotelyReachable;
@property(nonatomic) _Bool hasIsRemoteAccessAllowed;
@property(nonatomic) _Bool hasIsResidentAvailable;
@property(readonly, nonatomic) _Bool hasPrimaryServiceType;
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(readonly, nonatomic) _Bool hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasIsCached;
- (int)StringAsCertified:(id)arg1;	// IMP=0x00000000001e88a4
- (id)certifiedAsString:(int)arg1;	// IMP=0x00000000001e883e
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
- (int)StringAsSource:(id)arg1;	// IMP=0x00000000001e8684
- (id)sourceAsString:(int)arg1;	// IMP=0x00000000001e85c5
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasTransportProtocolVersion;
@property(nonatomic) _Bool hasIsTimedWrite;
@property(readonly, nonatomic) _Bool hasTransaction;
@property(readonly, nonatomic) _Bool hasVendorDetails;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x00000000001e8398
- (id)transportTypeAsString:(int)arg1;	// IMP=0x00000000001e82e4
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (id)characteristicsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001e825d
- (unsigned long long)characteristicsCount;	// IMP=0x00000000001e8240
- (void)addCharacteristics:(id)arg1;	// IMP=0x00000000001e81d6
- (void)clearCharacteristics;	// IMP=0x00000000001e81b9
@property(nonatomic) _Bool hasIsRemote;
@property(nonatomic) _Bool hasIsWrite;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

