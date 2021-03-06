//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailServices/MSDSearchResultsProtocol-Protocol.h>

@class NSString;
@protocol MSSearchDelegate;

@interface MSSearch <MSDSearchResultsProtocol>
{
    id <MSSearchDelegate> _delegate;	// 8 = 0x8
}

+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(_Bool)arg3 onServer:(_Bool)arg4 onlyInboxes:(_Bool)arg5 delegate:(id)arg6;	// IMP=0x0000000000001a47
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(_Bool)arg3 onServer:(_Bool)arg4 delegate:(id)arg5;	// IMP=0x0000000000001a23
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4;	// IMP=0x00000000000019b7
+ (void)setUnitTestingResultsArray:(id)arg1;	// IMP=0x00000000000023dc
@property(nonatomic) id <MSSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;	// IMP=0x000000000000221b
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000021f4
- (_Bool)_unitTestsAreEnabled;	// IMP=0x00000000000021e8
- (void)_delegateDidFindResults:(id)arg1;	// IMP=0x000000000000217f
- (void)_delegateDidFinishWithError:(id)arg1;	// IMP=0x000000000000210b
- (void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000001efb
- (void)foundResults:(id)arg1 error:(id)arg2;	// IMP=0x0000000000001ed3
- (void)cancel;	// IMP=0x0000000000001e56
- (id)newConnectionForInterface:(id)arg1;	// IMP=0x0000000000001b4d
- (void)dealloc;	// IMP=0x0000000000001b0f
- (id)initWithRemoteObjectInterface:(id)arg1;	// IMP=0x0000000000001ae0
- (id)_initWithDelegate:(id)arg1;	// IMP=0x0000000000001a7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

