//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface WFRemoteExecutionOutgoingFileSession
{
    NSURL *_fileURL;	// 8 = 0x8
    NSString *_transferIdentifier;	// 16 = 0x10
    NSString *_requestIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsVersion:(long long)arg1;	// IMP=0x00000000000023e1
+ (long long)version;	// IMP=0x00000000000023d6
- (void).cxx_destruct;	// IMP=0x0000000000002394
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000000231f
- (void)fileSentWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000002202
- (_Bool)sendToDestinations:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001d94
- (id)initWithService:(id)arg1 fileURL:(id)arg2 transferIdentifier:(id)arg3 requestIdentifier:(id)arg4;	// IMP=0x0000000000001b18

@end
