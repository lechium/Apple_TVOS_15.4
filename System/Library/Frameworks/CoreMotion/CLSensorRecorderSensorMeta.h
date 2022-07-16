//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding>
{
    _Bool _movement;	// 8 = 0x8
    unsigned int _offset;	// 12 = 0xc
    unsigned int _dataSize;	// 16 = 0x10
    int _dataType;	// 20 = 0x14
    unsigned long long _identifier;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    unsigned long long _timestamp;	// 40 = 0x28
    unsigned long long _dataIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000164617
@property _Bool movement; // @synthesize movement=_movement;
@property int dataType; // @synthesize dataType=_dataType;
@property unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property unsigned int offset; // @synthesize offset=_offset;
@property unsigned long long dataIdentifier; // @synthesize dataIdentifier=_dataIdentifier;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property double startTime; // @synthesize startTime=_startTime;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000164839
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000164763
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016465a
- (id)initWithDataType:(int)arg1;	// IMP=0x000000000016461f

@end

