//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSData, NSDateFormatter, NSString, PKDashboardButtonCollectionViewCell, PKDashboardCurrencyAmountCell, PKDashboardTitleMessageCell, PKPaymentTransactionCollectionViewCell, UIImage;

@interface PKDashboardBalanceSummaryItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKPaymentTransactionCollectionViewCell *_sampleTransactionCell;	// 8 = 0x8
    PKDashboardButtonCollectionViewCell *_sampleButtonCell;	// 16 = 0x10
    PKDashboardCurrencyAmountCell *_sampleCurrencyCell;	// 24 = 0x18
    PKDashboardButtonCollectionViewCell *_downloadPDFCell;	// 32 = 0x20
    PKDashboardButtonCollectionViewCell *_exportStatementDataCell;	// 40 = 0x28
    PKDashboardTitleMessageCell *_sampleTitleMessageCell;	// 48 = 0x30
    NSDateFormatter *_formatterMonthYear;	// 56 = 0x38
    NSDateFormatter *_formatterMonthAndDay;	// 64 = 0x40
    NSDateFormatter *_formatterMonthDayYear;	// 72 = 0x48
    NSDateFormatter *_formatterMonth;	// 80 = 0x50
    UIImage *_statementIcon;	// 88 = 0x58
    NSData *_pdfData;	// 96 = 0x60
    NSData *_exportedStatementData;	// 104 = 0x68
    long long _cellStyle;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000067e96
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x0000000000067cdd
- (_Bool)_statementIsFromMonthPriorToSummaryForItem:(id)arg1;	// IMP=0x0000000000067a45
- (id)_statementCellTitleForItem:(id)arg1;	// IMP=0x00000000000678ae
- (id)statementIcon;	// IMP=0x000000000006780c
- (void)_downloadAndPresentStatementForItem:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x000000000006738e
- (void)_configureStatementDownloadCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000006732a
- (void)_downloadExportedStatementDataForItem:(id)arg1 withFileFormat:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x00000000000670a9
- (id)_readableFileTypeForFormat:(id)arg1 feature:(unsigned long long)arg2;	// IMP=0x0000000000066ea6
- (void)_selectFileFormatForExportedStatementDataForItem:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x00000000000668fe
- (void)_configureExportStatementDataCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000006689a
- (void)_configureDailyCashCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000066537
- (void)_configureTotalBalanceCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000660f6
- (void)_configureMergeNoticeCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000006601f
- (void)_configureMergeBalanceCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000065b9b
- (void)_configureMonthlySpendLimitCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000065911
- (void)_configureTransactionLimitCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000065687
- (void)_configureInstallmentBalanceCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000065486
- (void)_configurePaymentsAndCreditsCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000650c3
- (void)_configureInterestCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000064daf
- (void)_configureSpendingCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000064a4e
- (void)_configureStatementBalanceCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000064258
- (void)_configurePriorStatementBalanceCell:(id)arg1 forItem:(id)arg2;	// IMP=0x0000000000063c39
- (void)_configureStatementCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000638b8
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(_Bool)arg5;	// IMP=0x000000000006365c
- (_Bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000635e3
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000006340d
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x0000000000062f76
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000000062f54
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000062dfb
- (id)collectionViewCellClasses;	// IMP=0x0000000000062d08
- (Class)itemClass;	// IMP=0x0000000000062cf7
- (id)init;	// IMP=0x0000000000062b18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

