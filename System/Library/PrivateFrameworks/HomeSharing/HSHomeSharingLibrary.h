//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HSConnection, NSNetService, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface HSHomeSharingLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;	// 8 = 0x8
    _Bool _requiresPassword;	// 16 = 0x10
    _Bool _available;	// 17 = 0x11
    _Bool __hasPendingUpdateRequest;	// 18 = 0x12
    unsigned int _version;	// 20 = 0x14
    NSString *_name;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
    NSString *_homeSharingGroupID;	// 40 = 0x28
    NSURL *_baseURL;	// 48 = 0x30
    NSNetService *_service;	// 56 = 0x38
    long long _connectionType;	// 64 = 0x40
    HSConnection *_connection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001b066
@property(retain, nonatomic) HSConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool _hasPendingUpdateRequest; // @synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest;
@property(readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(readonly, nonatomic) _Bool requiresPassword; // @synthesize requiresPassword=_requiresPassword;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_sendUpdateRequest;	// IMP=0x000000000001af1a
- (void)_onQueue_ensureConnection;	// IMP=0x000000000001ad99
@property(readonly, nonatomic) NSString *deviceGUID;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, nonatomic) unsigned int basePlaylistContainerID;
@property(readonly, nonatomic) unsigned int databaseID;
- (unsigned long long)hash;	// IMP=0x000000000001ab8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001aac6
- (void)disconnect;	// IMP=0x000000000001aa7b
- (id)urlForRequest:(id)arg1;	// IMP=0x000000000001a980
- (id)signedRequestFromURLRequest:(id)arg1;	// IMP=0x000000000001a885
- (id)securityInfoForURL:(id)arg1;	// IMP=0x000000000001a78a
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a6d2
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a647
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;	// IMP=0x000000000001a3cb

@end
