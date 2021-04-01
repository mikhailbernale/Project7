Imports System.Drawing
Imports System.Text.RegularExpressions
Imports System.Windows.Forms
Imports System.Windows.Input
Imports Microsoft.VisualStudio.TestTools.UITest.Extension
Imports Microsoft.VisualStudio.TestTools.UITesting
Imports Microsoft.VisualStudio.TestTools.UITesting.Keyboard
Imports Microsoft.VisualStudio.TestTools.UnitTesting

<CodedUITest()>
Public Class CodedUITest1

    <TestMethod()>
    Public Sub CodedUITestMethod1()
        '            
        ' Чтобы создать код для этого теста, выберите в контекстном меню команду "Формирование кода для кодированного теста пользовательского интерфейса", а затем выберите один из пунктов меню.
        '
        Me.UIMap.RecordedMethod1()
    End Sub

#Region "Дополнительные атрибуты тестирования"
    '
    ' При написании тестов можно использовать следующие дополнительные атрибуты:
    '
    '' TestInitialize используется для выполнения кода перед запуском каждого теста
    '<TestInitialize()> Public Sub MyTestInitialize()
    '    '
    '    ' Чтобы создать код для этого теста, выберите в контекстном меню команду "Формирование кода для кодированного теста пользовательского интерфейса", а затем выберите один из пунктов меню.
    '    '
    'End Sub

    '' TestCleanup используется для выполнения кода после завершения каждого теста
    '<TestCleanup()> Public Sub MyTestCleanup()
    '    '
    '    ' Чтобы создать код для этого теста, выберите в контекстном меню команду "Формирование кода для кодированного теста пользовательского интерфейса", а затем выберите один из пунктов меню.
    '    '
    'End Sub

#End Region

    '''<summary>
    '''Получает или устанавливает контекст теста, в котором предоставляются
    '''сведения о текущем тестовом запуске и обеспечивается его функциональность.
    '''</summary>
    Public Property TestContext() As TestContext
        Get
            Return testContextInstance
        End Get
        Set(ByVal value As TestContext)
            testContextInstance = value
        End Set
    End Property

    Private testContextInstance As TestContext

    Public ReadOnly Property UIMap As CodedUITestProject7.UIMap
        Get
            If (Me.map Is Nothing) Then
                Me.map = New CodedUITestProject7.UIMap()
            End If

            Return Me.map
        End Get
    End Property

    Private map As CodedUITestProject7.UIMap
End Class
