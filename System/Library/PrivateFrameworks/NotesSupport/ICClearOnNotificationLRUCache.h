//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSObject;

@interface ICClearOnNotificationLRUCache
{
    id <NSObject> _notificationToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002ea4c
@property(retain, nonatomic) id <NSObject> notificationToken; // @synthesize notificationToken=_notificationToken;
- (void)dealloc;	// IMP=0x000000000002e954
- (id)initWithMaxSize:(unsigned long long)arg1 notificationName:(id)arg2;	// IMP=0x000000000002e77f

@end
