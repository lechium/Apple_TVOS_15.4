//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEDExtensionIdentifier : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    NSString *_extensionIdentifier;	// 8 = 0x8
    long long _invocationNumber;	// 16 = 0x10
}

+ (id)archivedClasses;	// IMP=0x000000000003da8e
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003d938
+ (id)parseDEDIdentifierString:(id)arg1;	// IMP=0x000000000003d4cb
+ (id)log;	// IMP=0x000000000003d431
- (void).cxx_destruct;	// IMP=0x000000000003dc9d
@property long long invocationNumber; // @synthesize invocationNumber=_invocationNumber;
@property(retain) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003db52
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d9dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d940
@property(readonly) NSString *stringValue;
- (id)initWithExtensionIdentifier:(id)arg1 invocationNumber:(long long)arg2;	// IMP=0x000000000003d80a
- (id)initWithString:(id)arg1;	// IMP=0x000000000003d68c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

