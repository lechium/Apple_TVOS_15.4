//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ClientConnection;

__attribute__((visibility("hidden")))
@interface CADOperationGroup : NSObject
{
    ClientConnection *_conn;	// 8 = 0x8
}

+ (id)whitelistedBundles;	// IMP=0x000000000000caa6
+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x000000000000ca9e
+ (_Bool)requiresReminderAccess;	// IMP=0x000000000000ca96
+ (_Bool)requiresEventAccess;	// IMP=0x000000000000ca8e
- (void).cxx_destruct;	// IMP=0x000000000000cbc5
@property(readonly, nonatomic) ClientConnection *conn; // @synthesize conn=_conn;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;	// IMP=0x000000000000cb19
- (id)initWithClientConnection:(id)arg1;	// IMP=0x000000000000caae

@end

