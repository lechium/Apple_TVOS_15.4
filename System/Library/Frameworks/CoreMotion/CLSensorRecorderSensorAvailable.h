//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderSensorAvailable : NSObject <NSSecureCoding>
{
    int _dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000164f27
@property int dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000164f8c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000164f2f

@end

