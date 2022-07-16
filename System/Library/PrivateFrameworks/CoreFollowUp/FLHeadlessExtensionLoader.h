//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLExtensionContext, NSExtension, NSString, NSUUID;
@protocol FLExtensionHostContextInterface;

@interface FLHeadlessExtensionLoader : NSObject
{
    FLExtensionContext *_extensionContext;	// 8 = 0x8
    id <FLExtensionHostContextInterface> _delegate;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
    CDUnknownBlockType _requestInterruptionBlock;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSUUID *_sessionID;	// 48 = 0x30
}

+ (id)sharedExtensionQueue;	// IMP=0x000000000000c13d
- (void).cxx_destruct;	// IMP=0x000000000000c6f8
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @synthesize requestInterruptionBlock=_requestInterruptionBlock;
- (void)dealloc;	// IMP=0x000000000000c5fe
- (id)description;	// IMP=0x000000000000c585
- (id)_hostContextForExtension:(id)arg1;	// IMP=0x000000000000c4d6
- (id)_loadExtensionForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c194
- (_Bool)_setupSessionIfNeeded:(id *)arg1;	// IMP=0x000000000000c07a
- (_Bool)_loadExtension:(id *)arg1;	// IMP=0x000000000000be7f
- (id)remoteInterface;	// IMP=0x000000000000be4c
- (void)_terminate;	// IMP=0x000000000000bdc3
@property(readonly, nonatomic) NSExtension *extension;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000bcef
- (id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2;	// IMP=0x000000000000bc6e

@end
