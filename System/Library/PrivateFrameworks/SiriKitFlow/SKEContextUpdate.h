//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriKitFlow/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface SKEContextUpdate : NSObject <NSSecureCoding>
{
    MISSING_TYPE *provideContextCommand;	// 8 = 0x8
    MISSING_TYPE *nativeFlowContextCommand;	// 16 = 0x10
    MISSING_TYPE *systemDialogActs;	// 24 = 0x18
    MISSING_TYPE *rrEntities;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0000000000144030
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000143fc0
- (void).cxx_destruct;	// IMP=0x0000000000145050
- (id)init;	// IMP=0x0000000000144ff0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000144f50
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000144c20

@end

