//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@interface CBDeviceRequest : NSObject <CUXPCCodable>
{
    unsigned int _requestFlags;	// 8 = 0x8
    double _timeoutSeconds;	// 16 = 0x10
}

@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(nonatomic) unsigned int requestFlags; // @synthesize requestFlags=_requestFlags;
- (id)description;	// IMP=0x000000000002fd50
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000002fcf0
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002fb70

@end

