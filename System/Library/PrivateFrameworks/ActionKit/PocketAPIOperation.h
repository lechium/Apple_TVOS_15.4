//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSURLConnectionDelegate-Protocol.h>
#import <ActionKit/PocketAPIDelegate-Protocol.h>

@class NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, PocketAPI;
@protocol PocketAPIDelegate;

@interface PocketAPIOperation : NSOperation <NSURLConnectionDelegate, NSCopying, PocketAPIDelegate>
{
    PocketAPI *API;	// 8 = 0x8
    id <PocketAPIDelegate> delegate;	// 16 = 0x10
    int domain;	// 24 = 0x18
    int HTTPMethod;	// 28 = 0x1c
    NSString *APIMethod;	// 32 = 0x20
    NSDictionary *arguments;	// 40 = 0x28
    NSURLConnection *connection;	// 48 = 0x30
    NSHTTPURLResponse *response;	// 56 = 0x38
    NSMutableData *data;	// 64 = 0x40
    NSError *error;	// 72 = 0x48
    NSString *baseURLPath;	// 80 = 0x50
    _Bool finishedLoading;	// 88 = 0x58
    _Bool attemptedRelogin;	// 89 = 0x59
}

+ (id)errorFromXError:(id)arg1 withErrorCode:(unsigned long long)arg2 HTTPStatusCode:(unsigned long long)arg3;	// IMP=0x00000000002c304c
+ (id)decodeForURL:(id)arg1;	// IMP=0x00000000002c3037
+ (id)encodeForURL:(id)arg1;	// IMP=0x00000000002c2fed
@property(readonly, retain, nonatomic) NSMutableData *data; // @synthesize data;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response;
@property(readonly, retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments;
@property(retain, nonatomic) NSString *APIMethod; // @synthesize APIMethod;
@property(nonatomic) int HTTPMethod; // @synthesize HTTPMethod;
@property(nonatomic) int domain; // @synthesize domain;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error;
@property(retain, nonatomic) id <PocketAPIDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) PocketAPI *API; // @synthesize API;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c2df2
- (void)pkt_connectionFinishedLoading;	// IMP=0x00000000002c2d5e
- (id)pkt_URLRequest;	// IMP=0x00000000002c2878
- (id)pkt_requestArguments;	// IMP=0x00000000002c27a9
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;	// IMP=0x00000000002c2794
- (void)pocketAPILoggedIn:(id)arg1;	// IMP=0x00000000002c2728
- (void)connectionFinishedWithError:(id)arg1;	// IMP=0x00000000002c1da1
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000000002c1d8d
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000002c1d78
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000002c1d58
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000002c1be4
- (id)responseDictionary;	// IMP=0x00000000002c1ac3
@property(readonly, retain, nonatomic) NSString *baseURLPath;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002c193d
- (id)init;	// IMP=0x00000000002c18fb
- (_Bool)isFinished;	// IMP=0x00000000002c18eb
- (_Bool)isExecuting;	// IMP=0x00000000002c18d7
- (_Bool)isConcurrent;	// IMP=0x00000000002c18cf
- (void)start;	// IMP=0x00000000002c177c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

