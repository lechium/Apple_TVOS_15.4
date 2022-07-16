//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVContentKey, AVContentKeyReportGroup, AVContentKeySession, AVContentKeySpecifier, NSData, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface AVContentKeyRequestInternal : NSObject
{
    AVContentKeySession *session;	// 8 = 0x8
    AVContentKeyReportGroup *reportGroup;	// 16 = 0x10
    id identifier;	// 24 = 0x18
    NSData *keyIDFromInitializationData;	// 32 = 0x20
    NSData *initializationData;	// 40 = 0x28
    long long status;	// 48 = 0x30
    int responseInfoSent;	// 56 = 0x38
    _Bool providesPersistableKey;	// 60 = 0x3c
    NSDictionary *preloadingRequestOptions;	// 64 = 0x40
    struct OpaqueFigCPECryptor *figCryptor;	// 72 = 0x48
    NSError *error;	// 80 = 0x50
    struct __CFDictionary *requestInfo;	// 88 = 0x58
    unsigned long long customURLRequestID;	// 96 = 0x60
    struct OpaqueFigCustomURLHandler *customURLHandler;	// 104 = 0x68
    _Bool isRenewalRequest;	// 112 = 0x70
    NSString *cryptorUUID;	// 120 = 0x78
    unsigned long long cryptorKeyRequestID;	// 128 = 0x80
    _Bool isInchargeOfKeyRequest;	// 136 = 0x88
    struct OpaqueFigSimpleMutex *stateMutex;	// 144 = 0x90
    _Bool hasAnyKeyRequestSucceeded;	// 152 = 0x98
    AVContentKeySpecifier *contentKeySpecifier;	// 160 = 0xa0
    AVContentKey *contentKey;	// 168 = 0xa8
    NSData *contentIdentifier;	// 176 = 0xb0
}

@end

