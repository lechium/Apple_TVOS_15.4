//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser>
{
    NSMutableData *_octetStreamData;	// 8 = 0x8
    NSError *_parserError;	// 16 = 0x10
}

+ (_Bool)canHandleContentType:(id)arg1;	// IMP=0x00000000000519bc
- (void).cxx_destruct;	// IMP=0x00000000000519df
@property(retain, nonatomic) NSMutableData *octetStreamData; // @synthesize octetStreamData=_octetStreamData;
@property(readonly) NSError *parserError;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;	// IMP=0x0000000000051936
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000005188b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

