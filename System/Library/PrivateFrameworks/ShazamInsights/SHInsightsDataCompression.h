//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamInsights/SHInsightsDataStream-Protocol.h>

@class NSString;
@protocol SHInsightsDataStream;

__attribute__((visibility("hidden")))
@interface SHInsightsDataCompression : NSObject <SHInsightsDataStream>
{
    int _operation;	// 8 = 0x8
    int _algorithm;	// 12 = 0xc
    id <SHInsightsDataStream> _next;	// 16 = 0x10
    CDStruct_4686af4b _stream;	// 24 = 0x18
}

+ (int)supportedCompressionTypeFromFilePathExtension:(id)arg1;	// IMP=0x0000000000009da0
+ (int)supportedCompressionTypeFromFileURL:(id)arg1;	// IMP=0x0000000000009d4a
- (void).cxx_destruct;	// IMP=0x0000000000009ecf
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) CDStruct_4686af4b stream; // @synthesize stream=_stream;
@property(retain, nonatomic) id <SHInsightsDataStream> next; // @synthesize next=_next;
- (_Bool)performOperation:(int)arg1 withData:(id)arg2 algorithm:(int)arg3 flags:(int)arg4 error:(id *)arg5;	// IMP=0x0000000000009a0c
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000000009902
- (_Bool)setup;	// IMP=0x00000000000098b4
- (_Bool)processData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009834
- (id)initWithOperation:(int)arg1 algorithm:(int)arg2;	// IMP=0x00000000000097b4
- (id)initForDecompressionWithAlgorithm:(int)arg1;	// IMP=0x000000000000979b
- (id)initForCompressionWithAlgorithm:(int)arg1;	// IMP=0x0000000000009785
- (void)dealloc;	// IMP=0x000000000000974b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

