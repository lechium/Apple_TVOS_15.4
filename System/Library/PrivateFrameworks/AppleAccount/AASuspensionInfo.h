//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>

@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying>
{
    NSDictionary *_suspensionInfoDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000463d5
@property(readonly, nonatomic, getter=isFamilySuspended) _Bool familySuspended;
@property(readonly, nonatomic, getter=isiCloudSuspended) _Bool iCloudSuspended;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000462e8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000046275
- (id)init;	// IMP=0x000000000004624a

@end
