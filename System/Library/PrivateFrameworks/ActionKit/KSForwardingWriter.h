//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/KSWriter-Protocol.h>

@class NSString;
@protocol KSWriter;

@interface KSForwardingWriter : NSObject <KSWriter>
{
    id <KSWriter> _writer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000249626
- (void)writeString:(id)arg1;	// IMP=0x0000000000249610
- (void)close;	// IMP=0x00000000002495f6
- (void)dealloc;	// IMP=0x0000000000249544
- (id)init;	// IMP=0x0000000000249530
- (id)initWithOutputWriter:(id)arg1;	// IMP=0x00000000002494c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

