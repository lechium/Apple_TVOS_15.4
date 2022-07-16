//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXEventData : NSObject
{
    struct _AXEventDataStorage _storage;	// 8 = 0x8
}

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;	// IMP=0x000000000009d68c
+ (id)dataWithSender:(long long)arg1 page:(long long)arg2 usage:(long long)arg3 modifierFlags:(long long)arg4 eventValue1:(float)arg5 eventValue2:(float)arg6;	// IMP=0x000000000009d623
+ (id)dataWithSender:(long long)arg1;	// IMP=0x000000000009d5fc
@property(readonly, nonatomic) long long dataLength;
@property(readonly, nonatomic) char *dataBytes;
@property(readonly, nonatomic) _Bool wasPostedByAccessibility;
@property(readonly, nonatomic) float eventValue2;
@property(readonly, nonatomic) float eventValue1;
@property(readonly, nonatomic) long long modifierFlags;
@property(readonly, nonatomic) long long usage;
@property(readonly, nonatomic) long long page;
@property(readonly, nonatomic) long long eventSenderIdentifier;
- (id)description;	// IMP=0x000000000009d753
- (id)init;	// IMP=0x000000000009d717

@end

