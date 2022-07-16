//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMessageDataConsumerFactory-Protocol.h>

@class MFMessage, MFMessageLibrary, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>
{
    MFMessageLibrary *_library;	// 8 = 0x8
    MFMessage *_message;	// 16 = 0x10
}

@property(retain, nonatomic) MFMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) MFMessageLibrary *library; // @synthesize library=_library;
- (void)dealloc;	// IMP=0x0000000000084e2c
- (id)dataConsumerForPart:(id)arg1;	// IMP=0x0000000000084ddd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
