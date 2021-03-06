//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFManagedStore-Protocol.h>

@class NSString, NSXPCConnection;

@interface AFManagedStorageConnection : NSObject <AFManagedStore>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b4430
- (void)resetKnowledgeStoreWithName:(id)arg1;	// IMP=0x00000000000b42e6
- (void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;	// IMP=0x00000000000b4168
- (id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;	// IMP=0x00000000000b3f47
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000b3ec1
- (id)domainObjectForKey:(id)arg1;	// IMP=0x00000000000b3cbf
- (id)_synchronousManagedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3c3c
- (id)_managedStoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3bb9
- (id)_managedStoreService;	// IMP=0x00000000000b3b69
- (id)_connection;	// IMP=0x00000000000b396b
- (void)_clearConnection;	// IMP=0x00000000000b38b3
- (void)dealloc;	// IMP=0x00000000000b3875

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

