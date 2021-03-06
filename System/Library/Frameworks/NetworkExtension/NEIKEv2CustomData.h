//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying>
{
    unsigned long long _customType;	// 8 = 0x8
    NSData *_customData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000968af
@property(retain) NSData *customData; // @synthesize customData=_customData;
@property unsigned long long customType; // @synthesize customType=_customType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000967c7
- (id)description;	// IMP=0x0000000000096743

@end

