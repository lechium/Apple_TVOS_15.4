//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSMessageToDelete : NSObject
{
    unsigned int _dataProtectionClass;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSString *_alternateGUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d1fb9
@property(retain, setter=setAlternateGUID:) NSString *alternateGUID; // @synthesize alternateGUID=_alternateGUID;
@property(retain, setter=setGUID:) NSString *guid; // @synthesize guid=_guid;
@property unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;

@end

