//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject
{
    NSString *_tokenID;	// 8 = 0x8
    NSString *_slotName;	// 16 = 0x10
    NSString *_driverName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000035169
@property(readonly, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(readonly, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
@property(readonly, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (id)initWithTokenInfo:(id)arg1;	// IMP=0x0000000000034f8a

@end

