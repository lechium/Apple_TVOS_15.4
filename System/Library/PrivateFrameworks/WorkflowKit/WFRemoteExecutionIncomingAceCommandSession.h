//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFRemoteExecutionAceCommandRequestResponse;

@interface WFRemoteExecutionIncomingAceCommandSession
{
    WFRemoteExecutionAceCommandRequestResponse *_response;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000024909f
@property(retain, nonatomic) WFRemoteExecutionAceCommandRequestResponse *response; // @synthesize response=_response;
- (void)sendResponseWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3 destinations:(id)arg4 options:(id)arg5;	// IMP=0x0000000000248f80
- (void)sendToDestinations:(id)arg1 options:(id)arg2;	// IMP=0x0000000000248ae3
- (void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x000000000024853e

@end

