//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/ProgressiveResultsHandlerProtocol-Protocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol>
{
    CDUnknownBlockType _progressBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025128
- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;	// IMP=0x0000000000025113
- (void)completedWithError:(id)arg1;	// IMP=0x0000000000025101
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025039

@end

